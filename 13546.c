void fun()
{
  int entity_0 = 57;
  entity_0 = 17;
  char* entity_7;
  char entity_2[entity_0] = "";
  entity_7 = (char*)malloc(14*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'q', entity_0-1);
  entity_2[entity_0-1]='0';
  memcpy(entity_7, entity_2, entity_0*sizeof(char));
}
void fun()
{
  int entity_0 = 48;
  char entity_3[entity_0] = "";
  char* entity_7;
  memset(entity_3, 'g', entity_0-1);
  entity_3[entity_0-1]='0';
  entity_7 = (char*)malloc(53*sizeof(char));
  entity_7[0]='0';
  entity_0 = 50;
  memcpy(entity_7, entity_3, entity_0*sizeof(char));
}
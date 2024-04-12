void fun()
{
  int entity_4 = 76;
  char entity_7[entity_4] = "";
  char* entity_6;
  memset(entity_7, 'a', entity_4-1);
  entity_7[entity_4-1]='0';
  entity_6 = (char*)malloc(85*sizeof(char));
  entity_6[0]='0';
  entity_4 = 57;
  memcpy(entity_6, entity_7, entity_4*sizeof(char));
}
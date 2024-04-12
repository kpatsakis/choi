void fun()
{
  int entity_3 = 76;
  int entity_9 = 15;
  char* entity_8;
  char entity_7[entity_3] = "";
  memset(entity_7, 'z', entity_3-1);
  entity_7[entity_3-1]='0';
  entity_8 = (char*)malloc(94*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_7);
}
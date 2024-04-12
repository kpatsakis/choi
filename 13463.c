void fun()
{
  int entity_3 = 7;
  entity_3 = 7;
  char entity_9[70] = "";
  char* entity_7;
  char entity_4[entity_3] = "";
  memset(entity_9, 'r', 70-1);
  entity_9[70-1]='0';
  memset(entity_4, 'j', entity_3-1);
  entity_4[entity_3-1]='0';
  entity_7 = (char*)malloc(8*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_4);
}
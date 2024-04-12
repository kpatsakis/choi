void fun()
{
  int entity_6 = 93;
  char* entity_8;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  memset(entity_1, 'l', entity_6-1);
  entity_1[entity_6-1]='';
  entity_8 = (char*)malloc(8*sizeof(char));
  entity_8[8-1]='';
  entity_6 = 72;
  entity_1[52] = 'i';
}
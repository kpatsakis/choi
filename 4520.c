void fun()
{
  int entity_7 = 93;
  int entity_8 = 5;
  entity_8 = 44;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_3;
  memset(entity_6, 'D', entity_8-1);
  entity_6[entity_8-1]='';
  entity_3 = (char*)malloc(73*sizeof(char));
  entity_3[73-1]='';
  entity_6[91] = 'V';
}
void fun()
{
  int entity_6 = 58;
  entity_6 = 63;
  char* entity_7;
  char entity_3[33] = "";
  entity_3 = NULL;
  memset(entity_3, 'F', 33-1);
  entity_3[33-1]='';
  entity_7 = (char*)malloc(73*sizeof(char));
  entity_7[73-1]='';
  entity_3[entity_6] = 'l';
}
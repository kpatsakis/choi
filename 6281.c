void fun()
{
  int entity_3 = 26;
  entity_3 = 19;
  char entity_6[26] = "";
  entity_6 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(3*sizeof(char));
  entity_5[3-1]='';
  memset(entity_6, 'X', 26-1);
  entity_6[26-1]='';
  entity_6[entity_3] = 'l';
}
void fun()
{
  int entity_5 = 74;
  entity_5 = 26;
  char entity_9[35] = "";
  entity_9 = NULL;
  char* entity_2;
  char entity_3[96] = "";
  entity_3 = NULL;
  memset(entity_9, 'w', 35-1);
  entity_9[35-1]='';
  entity_2 = (char*)malloc(89*sizeof(char));
  entity_2[89-1]='';
  memset(entity_3, 'C', 96-1);
  entity_3[96-1]='';
  entity_3[entity_5] = 'b';
}
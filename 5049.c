void fun()
{
  int entity_1 = 76;
  int entity_7 = 34;
  entity_1 = 46;
  char entity_6[1] = "";
  entity_6 = NULL;
  char* entity_2;
  memset(entity_6, 'W', 1-1);
  entity_6[1-1]='';
  entity_2 = (char*)malloc(73*sizeof(char));
  entity_2[73-1]='';
  entity_6[entity_1] = 't';
}
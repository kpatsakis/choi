void fun()
{
  int entity_8 = 2;
  char entity_9 = 'a';
  char* entity_6;
  char entity_5[53] = "";
  entity_5 = NULL;
  memset(entity_5, 'A', 53-1);
  entity_5[53-1]='';
  entity_6 = (char*)malloc(44*sizeof(char));
  entity_6[44-1]='';
  entity_8 = 94;
  entity_5[entity_8] = 'x';
}
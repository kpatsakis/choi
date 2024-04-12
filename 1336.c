void fun()
{
  int entity_2 = 46;
  int entity_0 = 22;
  entity_2 = 35;
  char* entity_3;
  char entity_5[75] = "";
  entity_5 = NULL;
  memset(entity_5, 'O', 75-1);
  entity_5[75-1]='';
  entity_3 = (char*)malloc(60*sizeof(char));
  entity_3[60-1]='';
  entity_5[entity_2] = 'A';
}
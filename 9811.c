void fun()
{
  int entity_2 = 60;
  char entity_3[51] = "";
  entity_3 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(86*sizeof(char));
  entity_7[86-1]='';
  memset(entity_3, 'M', 51-1);
  entity_3[51-1]='';
  entity_3[entity_2] = 'X';
}
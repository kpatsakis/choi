void fun()
{
  int entity_4 = 51;
  char entity_7[86] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 'g', 86-1);
  entity_7[86-1]='';
  entity_9 = (char*)malloc(90*sizeof(char));
  entity_9[90-1]='';
  entity_7[59] = 'p';
}
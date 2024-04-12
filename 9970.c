void fun()
{
  int entity_5 = 50;
  char entity_2[76] = "";
  entity_2 = NULL;
  char* entity_7;
  char entity_9 = 'D';
  entity_7 = (char*)malloc(40*sizeof(char));
  entity_7[40-1]='';
  memset(entity_2, 'l', 76-1);
  entity_2[76-1]='';
  entity_2[entity_5] = 'c';
}
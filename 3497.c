void fun()
{
  int entity_5 = 41;
  int entity_3 = 50;
  char* entity_2;
  char entity_7[72] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(24*sizeof(char));
  entity_2[24-1]='';
  memset(entity_7, 'P', 72-1);
  entity_7[72-1]='';
  entity_7[entity_5] = 'E';
}
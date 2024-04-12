void fun()
{
  int entity_8 = 40;
  char* entity_9;
  char entity_2[95] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(33*sizeof(char));
  entity_9[33-1]='';
  memset(entity_2, 'S', 95-1);
  entity_2[95-1]='';
  entity_8 = 17;
  entity_2[entity_8] = 'I';
}
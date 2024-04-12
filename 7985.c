void fun()
{
  int entity_1 = 1;
  char* entity_2;
  char entity_9[37] = "";
  entity_9 = NULL;
  entity_2 = (char*)malloc(79*sizeof(char));
  entity_2[79-1]='';
  memset(entity_9, 'N', 37-1);
  entity_9[37-1]='';
  entity_9[entity_1] = 'z';
}
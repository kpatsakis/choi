void fun()
{
  int entity_4 = 16;
  char* entity_1;
  char entity_2[95] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(4*sizeof(char));
  entity_1[4-1]='';
  memset(entity_2, 'N', 95-1);
  entity_2[95-1]='';
  strcpy(entity_1, entity_2);
}
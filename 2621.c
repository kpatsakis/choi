void fun()
{
  int entity_4 = 68;
  char entity_7[9] = "";
  entity_7 = NULL;
  char* entity_1;
  char* entity_2;
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[43-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_7, 'i', 9-1);
  entity_7[9-1]='';
  strcpy(entity_2, entity_7);
}
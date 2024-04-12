void fun()
{
  int entity_1 = 92;
  char* entity_6;
  char entity_9[53] = "";
  entity_9 = NULL;
  char* entity_2;
  char* entity_3;
  memset(entity_9, 'u', 53-1);
  entity_9[53-1]='';
  entity_3 = (char*)malloc(59*sizeof(char));
  entity_3[59-1]='';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  entity_6 = (char*)malloc(99*sizeof(char));
  entity_6[99-1]='';
  strcpy(entity_2, entity_9);
}
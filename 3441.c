void fun()
{
  int entity_0 = 32;
  int entity_8 = 93;
  entity_8 = 16;
  char* entity_1;
  char* entity_5;
  char entity_2[30] = "";
  entity_2 = NULL;
  entity_5 = (char*)malloc(82*sizeof(char));
  entity_5[82-1]='';
  memset(entity_2, 'I', 30-1);
  entity_2[30-1]='';
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  strcpy(entity_1, entity_2);
}
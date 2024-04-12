void fun()
{
  int entity_6 = 98;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_8;
  char* entity_5;
  entity_5 = (char*)malloc(99*sizeof(char));
  entity_5[99-1]='';
  memset(entity_1, 'o', entity_6-1);
  entity_1[entity_6-1]='';
  entity_8 = (char*)malloc(63*sizeof(char));
  entity_8[63-1]='';
  strcpy(entity_8, entity_1);
}
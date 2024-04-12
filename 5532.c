void fun()
{
  int entity_6 = 72;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char* entity_1;
  char* entity_2;
  char entity_8[48] = "";
  entity_8 = NULL;
  entity_1 = (char*)malloc(47*sizeof(char));
  entity_1[47-1]='';
  entity_2 = (char*)malloc(99*sizeof(char));
  entity_2[99-1]='';
  memset(entity_8, 'j', 48-1);
  entity_8[48-1]='';
  memset(entity_5, 'O', entity_6-1);
  entity_5[entity_6-1]='';
  strcpy(entity_2, entity_5);
}
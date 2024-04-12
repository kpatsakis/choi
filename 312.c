void fun()
{
  int entity_8 = 24;
  char entity_1 = 'A';
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char entity_3 = 'B';
  char* entity_2;
  entity_2 = (char*)malloc(7*sizeof(char));
  entity_2[7-1]='';
  memset(entity_4, 'A', entity_8-1);
  entity_4[entity_8-1]='';
  memcpy(entity_2, entity_4, entity_8*sizeof(char));
}
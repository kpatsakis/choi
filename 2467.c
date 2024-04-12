void fun()
{
  int entity_2 = 57;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  char entity_8 = 'R';
  char* entity_4;
  entity_4 = (char*)malloc(81*sizeof(char));
  entity_4[81-1]='';
  memset(entity_3, 'y', entity_2-1);
  entity_3[entity_2-1]='';
  memcpy(entity_4, entity_3, entity_2*sizeof(char));
}
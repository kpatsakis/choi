void fun()
{
  int entity_2 = 65;
  char entity_3 = 'j';
  char entity_6[15] = "";
  entity_6 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  memset(entity_6, 'C', 15-1);
  entity_6[15-1]='';
  memcpy(entity_1, entity_6, 15*sizeof(char));
}
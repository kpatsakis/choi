void fun()
{
  int entity_2 = 8;
  char* entity_3;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  entity_3 = (char*)malloc(21*sizeof(char));
  entity_3[21-1]='';
  memset(entity_4, 'B', entity_2-1);
  entity_4[entity_2-1]='';
  memcpy(entity_3, entity_4, entity_2*sizeof(char));
}
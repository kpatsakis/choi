void fun()
{
  int entity_7 = 97;
  int entity_3 = 69;
  char* entity_2;
  char entity_5[33] = "";
  entity_5 = NULL;
  char* entity_4;
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  memset(entity_5, 'F', 33-1);
  entity_5[33-1]='';
  entity_4 = (char*)malloc(99*sizeof(char));
  entity_4[99-1]='';
  memcpy(entity_2, entity_5, 33*sizeof(char));
}
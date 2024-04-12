void fun()
{
  int entity_7 = 45;
  int entity_2 = 56;
  entity_2 = 11;
  char entity_4[85] = "";
  entity_4 = NULL;
  char entity_3[94] = "";
  entity_3 = NULL;
  char* entity_1;
  memset(entity_4, 'f', 85-1);
  entity_4[85-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  memset(entity_3, 'w', 94-1);
  entity_3[94-1]='';
  memcpy(entity_1, entity_3, 94*sizeof(char));
}
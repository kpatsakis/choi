void fun()
{
  int entity_3 = 11;
  char* entity_2;
  char* entity_8;
  char entity_9 = 'A';
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(44*sizeof(char));
  entity_8[44-1]='';
  entity_2 = (char*)malloc(82*sizeof(char));
  entity_2[82-1]='';
  memset(entity_6, 'o', entity_3-1);
  entity_6[entity_3-1]='';
  memcpy(entity_2, entity_6, entity_3*sizeof(char));
}
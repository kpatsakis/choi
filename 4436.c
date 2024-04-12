void fun()
{
  int entity_3 = 61;
  entity_3 = 54;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(82*sizeof(char));
  entity_2[82-1]='';
  memset(entity_7, 'E', entity_3-1);
  entity_7[entity_3-1]='';
  memcpy(entity_2, entity_7, entity_3*sizeof(char));
}
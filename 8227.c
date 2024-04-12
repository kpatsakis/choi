void fun()
{
  int entity_4 = 77;
  char entity_7[79] = "";
  entity_7 = NULL;
  char* entity_3;
  memset(entity_7, 'd', 79-1);
  entity_7[79-1]='';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memcpy(entity_3, entity_7, 79*sizeof(char));
}
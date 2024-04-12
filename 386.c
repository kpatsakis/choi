void fun()
{
  int entity_4 = 41;
  char* entity_2;
  char entity_3[79] = "";
  entity_3 = NULL;
  entity_2 = (char*)malloc(13*sizeof(char));
  entity_2[13-1]='';
  memset(entity_3, 'P', 79-1);
  entity_3[79-1]='';
  memcpy(entity_2, entity_3, 79*sizeof(char));
}
void fun()
{
  int entity_3 = 11;
  entity_3 = 93;
  char* entity_8;
  char entity_0 = 'e';
  char entity_2[27] = "";
  entity_2 = NULL;
  char entity_1 = 'q';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memset(entity_2, 'b', 27-1);
  entity_2[27-1]='';
  memcpy(entity_8, entity_2, 27*sizeof(char));
}
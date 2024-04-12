void fun()
{
  int entity_3 = 81;
  char* entity_8;
  char entity_2[36] = "";
  entity_2 = NULL;
  entity_8 = (char*)malloc(45*sizeof(char));
  entity_8[45-1]='';
  memset(entity_2, 'y', 36-1);
  entity_2[36-1]='';
  memcpy(entity_8, entity_2, 36*sizeof(char));
}
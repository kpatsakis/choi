void fun()
{
  int entity_3 = 66;
  entity_3 = 31;
  char* entity_0;
  char* entity_1;
  char entity_2[entity_3] = "";
  memset(entity_2, 'u', entity_3-1);
  entity_2[entity_3-1]='0';
  entity_0 = (char*)malloc(0*sizeof(char));
  entity_0[0]='0';
  entity_1 = (char*)malloc(97*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_2, entity_3*sizeof(char));
}
void fun()
{
  int entity_2 = 67;
  entity_2 = 40;
  char entity_8[41] = "";
  entity_8 = NULL;
  char* entity_1;
  char entity_0[79] = "";
  entity_0 = NULL;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  memset(entity_8, 'C', 41-1);
  entity_8[41-1]='';
  entity_1 = (char*)malloc(92*sizeof(char));
  entity_1[92-1]='';
  memset(entity_0, 'm', 79-1);
  entity_0[79-1]='';
  memset(entity_6, 'L', entity_2-1);
  entity_6[entity_2-1]='';
  memcpy(entity_1, entity_6, entity_2*sizeof(char));
}
void fun()
{
  int entity_4 = 13;
  char* entity_7;
  char* entity_3;
  char entity_0[2] = "";
  entity_0 = NULL;
  entity_7 = (char*)malloc(74*sizeof(char));
  entity_7[74-1]='';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memset(entity_0, 'X', 2-1);
  entity_0[2-1]='';
  memcpy(entity_3, entity_0, 2*sizeof(char));
}
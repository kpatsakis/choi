void fun()
{
  int entity_6 = 58;
  char* entity_0;
  char entity_3[83] = "";
  entity_3 = NULL;
  char* entity_1;
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  memset(entity_3, 'N', 83-1);
  entity_3[83-1]='';
  entity_1 = (char*)malloc(36*sizeof(char));
  entity_1[36-1]='';
  memcpy(entity_0, entity_3, 83*sizeof(char));
}
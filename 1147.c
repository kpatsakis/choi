void fun()
{
  int entity_4 = 62;
  entity_4 = 96;
  char* entity_3;
  char* entity_2;
  char entity_0[83] = "";
  entity_0 = NULL;
  char entity_9 = 'D';
  entity_2 = (char*)malloc(5*sizeof(char));
  entity_2[5-1]='';
  memset(entity_0, 'j', 83-1);
  entity_0[83-1]='';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memcpy(entity_3, entity_0, 83*sizeof(char));
}
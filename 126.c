void fun()
{
  int entity_2 = 10;
  char entity_3[1] = "";
  entity_3 = NULL;
  char* entity_1;
  char* entity_0;
  memset(entity_3, 'j', 1-1);
  entity_3[1-1]='';
  entity_1 = (char*)malloc(96*sizeof(char));
  entity_1[96-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memcpy(entity_0, entity_3, 1*sizeof(char));
}
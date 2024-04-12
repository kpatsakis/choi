void fun()
{
  int entity_8 = 36;
  int entity_7 = 44;
  char entity_6 = 'A';
  char* entity_0;
  char* entity_1;
  char entity_2[15] = "";
  entity_2 = NULL;
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  memset(entity_2, 'j', 15-1);
  entity_2[15-1]='';
  entity_1 = (char*)malloc(0*sizeof(char));
  entity_1[0-1]='';
  memcpy(entity_0, entity_2, 15*sizeof(char));
}
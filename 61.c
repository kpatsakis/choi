void fun()
{
  int entity_3 = 69;
  char* entity_8;
  char* entity_1;
  char entity_2[93] = "";
  entity_2 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memset(entity_2, 'm', 93-1);
  entity_2[93-1]='';
  entity_8 = (char*)malloc(48*sizeof(char));
  entity_8[48-1]='';
  entity_1 = (char*)malloc(36*sizeof(char));
  entity_1[36-1]='';
  entity_3 = 29;
  memcpy(entity_0, entity_2, 93*sizeof(char));
}
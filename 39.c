void fun()
{
  int entity_4 = 82;
  char* entity_1;
  char* entity_3;
  char entity_7[64] = "";
  entity_7 = NULL;
  char* entity_6;
  entity_1 = (char*)malloc(66*sizeof(char));
  entity_1[66-1]='';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_7, 'j', 64-1);
  entity_7[64-1]='';
  entity_3 = (char*)malloc(10*sizeof(char));
  entity_3[10-1]='';
  strcpy(entity_6, entity_7);
}
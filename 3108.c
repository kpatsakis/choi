void fun()
{
  int entity_6 = 21;
  char entity_7[16] = "";
  entity_7 = NULL;
  char* entity_1;
  char* entity_0;
  char entity_3[85] = "";
  entity_3 = NULL;
  memset(entity_3, 'N', 85-1);
  entity_3[85-1]='';
  memset(entity_7, 'I', 16-1);
  entity_7[16-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  entity_0 = (char*)malloc(64*sizeof(char));
  entity_0[64-1]='';
  memcpy(entity_1, entity_3, 85*sizeof(char));
}
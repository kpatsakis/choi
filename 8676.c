void fun()
{
  char entity_9[50] = "";
  entity_9 = NULL;
  char* entity_3;
  char* entity_8;
  char* entity_6;
  entity_3 = (char*)malloc(6*sizeof(char));
  entity_3[6-1]='';
  memset(entity_9, 'G', 50-1);
  entity_9[50-1]='';
  entity_6 = (char*)malloc(93*sizeof(char));
  entity_6[93-1]='';
  entity_8 = (char*)malloc(64*sizeof(char));
  entity_8[64-1]='';
  memcpy(entity_8, entity_9, 50*sizeof(char));
}
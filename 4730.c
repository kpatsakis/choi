void fun()
{
  char* entity_2;
  char* entity_9;
  char entity_4 = 'm';
  char* entity_1;
  char entity_8[52] = "";
  entity_8 = NULL;
  memset(entity_8, 'U', 52-1);
  entity_8[52-1]='';
  entity_2 = (char*)malloc(92*sizeof(char));
  entity_2[92-1]='';
  entity_1 = (char*)malloc(70*sizeof(char));
  entity_1[70-1]='';
  entity_9 = (char*)malloc(64*sizeof(char));
  entity_9[64-1]='';
  strcpy(entity_9, entity_8);
}
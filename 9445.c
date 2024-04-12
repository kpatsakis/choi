void fun()
{
  int entity_8 = 7;
  char entity_5[92] = "";
  entity_5 = NULL;
  char* entity_6;
  char* entity_0;
  char* entity_2;
  entity_2 = (char*)malloc(85*sizeof(char));
  entity_2[85-1]='';
  entity_6 = (char*)malloc(9*sizeof(char));
  entity_6[9-1]='';
  memset(entity_5, 'k', 92-1);
  entity_5[92-1]='';
  entity_0 = (char*)malloc(64*sizeof(char));
  entity_0[64-1]='';
  memcpy(entity_6, entity_5, 92*sizeof(char));
}
void fun()
{
  int entity_1 = 56;
  char* entity_2;
  char* entity_5;
  char* entity_7;
  char entity_8[64] = "";
  entity_8 = NULL;
  entity_2 = (char*)malloc(92*sizeof(char));
  entity_2[92-1]='';
  memset(entity_8, 'm', 64-1);
  entity_8[64-1]='';
  entity_5 = (char*)malloc(84*sizeof(char));
  entity_5[84-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  entity_1 = 82;
  strcpy(entity_7, entity_8);
}
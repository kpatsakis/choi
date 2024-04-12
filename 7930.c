void fun()
{
  int entity_1 = 78;
  entity_1 = 33;
  char* entity_7;
  char* entity_2;
  char* entity_3;
  char entity_8[69] = "";
  entity_8 = NULL;
  entity_7 = (char*)malloc(74*sizeof(char));
  entity_7[74-1]='';
  memset(entity_8, 'K', 69-1);
  entity_8[69-1]='';
  entity_2 = (char*)malloc(84*sizeof(char));
  entity_2[84-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  strcpy(entity_3, entity_8);
}
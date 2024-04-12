void fun()
{
  int entity_8 = 6;
  char entity_7[5] = "";
  entity_7 = NULL;
  char* entity_0;
  char entity_4[84] = "";
  entity_4 = NULL;
  char* entity_2;
  entity_0 = (char*)malloc(70*sizeof(char));
  entity_0[70-1]='';
  memset(entity_7, 'o', 5-1);
  entity_7[5-1]='';
  memset(entity_4, 'r', 84-1);
  entity_4[84-1]='';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  strcpy(entity_2, entity_4);
}
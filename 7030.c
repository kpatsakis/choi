void fun()
{
  int entity_2 = 97;
  char entity_7[20] = "";
  entity_7 = NULL;
  char* entity_6;
  char entity_3[5] = "";
  entity_3 = NULL;
  char* entity_1;
  memset(entity_3, 'z', 5-1);
  entity_3[5-1]='';
  entity_6 = (char*)malloc(13*sizeof(char));
  entity_6[13-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  memset(entity_7, 'Z', 20-1);
  entity_7[20-1]='';
  strcpy(entity_1, entity_7);
}
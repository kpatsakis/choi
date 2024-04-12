void fun()
{
  int entity_5 = 97;
  char* entity_8;
  char entity_2[58] = "";
  entity_2 = NULL;
  char* entity_1;
  char entity_7[68] = "";
  entity_7 = NULL;
  memset(entity_7, 'u', 68-1);
  entity_7[68-1]='';
  memset(entity_2, 'w', 58-1);
  entity_2[58-1]='';
  entity_1 = (char*)malloc(82*sizeof(char));
  entity_1[82-1]='';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  entity_5 = 59;
  memcpy(entity_8, entity_2, 58*sizeof(char));
}